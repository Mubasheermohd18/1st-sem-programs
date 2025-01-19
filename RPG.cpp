#include <stdio.h>
#include <math.h>  // For pow() function

int main() {
    // Input variables
    double curr_age = 30;
    double ret_age = 60;
    double life_exp = 85;
    double income_req = 50000;  // Monthly income required after retirement in today's value
    double infl_rate = 0.06;  // 6% annual inflation
    double exist_funds = 1000000;  // Existing retirement funds

    // Step 1: Calculate the number of years until retirement
    double yrs_to_ret = ret_age - curr_age;

    // Step 2: Calculate the future monthly income required, adjusted for inflation
    double future_income = income_req * pow((1 + infl_rate), yrs_to_ret);

    // Step 3: Convert future monthly income to annual income
    double future_annual_income = future_income * 12;

    // Step 4: Calculate years in retirement
    double yrs_in_ret = life_exp - ret_age;

    // Step 5: Calculate the total retirement corpus needed
    double ret_corpus = future_annual_income * yrs_in_ret;

    // Step 6: Calculate required savings by subtracting existing funds
    double req_savings = ret_corpus - exist_funds;

    // Step 7: Calculate annual savings needed until retirement
    double annual_savings = req_savings / yrs_to_ret;

    // Step 8: Calculate monthly savings needed
    double monthly_savings = annual_savings / 12;

    // Output the results
    printf("Future Monthly Income Needed: ?%.2lf\n", future_income);
    printf("Total Retirement Corpus Needed: ?%.2lf\n", ret_corpus);
    printf("Required Savings: ?%.2lf\n", req_savings);
    printf("Annual Savings Needed: ?%.2lf\n", annual_savings);
    printf("Monthly Savings Needed: ?%.2lf\n", monthly_savings);

    return 0;
}










