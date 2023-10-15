#include <stdio.h>
double findMax(double sales[]){
    /*finds the maximum value in an array*/
    double max;
    int i;
    for(i = 0;i <= 11; i++){
        if (max < sales[i]){
            max = sales[i];
        }
    }
    return max;
}
double findMin(double sales[]){
    /*finds the minimum value in an array*/
    double min = sales[0];
    int i;
    for(i = 0;i <= 11; i++){
        if (min > sales[i]){
            min = sales[i];
        }
    }
    return min;
}

double movingAverage(double sales[], int month){
    /*calculates the six month moving average*/
    int i;
    double sum; 
    for(i = 0 +month; i <= 6+month; i++){
        sum += sales[i];
    }
    double total = sum/6;
    return total;
}

void main(){
    double salesMonth[12] = {23458.01, 40112.00, 56011.85, 37820.88, 37904.67, 60200.22, 72400.31, 56210.89, 67230.84, 68233.12, 80950.34, 95225.22};
    char month[12][15] = {"January","February","March","April","May","June","July","August", "September","October","November","December"};

    printf("monthly sales report for 2022:\n");
    printf("Month     Sales\n");
    printf("January   $%.2f\n", salesMonth[0]);
    printf("February  $%.2f\n", salesMonth[1]);
    printf("March     $%.2f\n", salesMonth[2]);
    printf("April     $%.2f\n", salesMonth[3]);
    printf("May       $%.2f\n", salesMonth[4]);
    printf("June      $%.2f\n", salesMonth[5]);
    printf("July      $%.2f\n", salesMonth[6]);
    printf("August    $%.2f\n", salesMonth[7]);
    printf("September $%.2f\n", salesMonth[8]);
    printf("October   $%.2f\n", salesMonth[9]);
    printf("November  $%.2f\n", salesMonth[10]);
    printf("December  $%.2f\n", salesMonth[11]);
    printf("Sales summary:\n");
    printf("Maximum sales: $%.2f\n",findMax(salesMonth));
    printf("Minimum sales: $%.2f\n",findMin(salesMonth));
    printf("Six-Month Moving Average Report:\n");
    printf("January  - June      $%.2f\n",movingAverage(salesMonth,0));
    printf("February - July      $%.2f\n",movingAverage(salesMonth,1));
    printf("March    - August    $%.2f\n",movingAverage(salesMonth,2));
    printf("April    - September $%.2f\n",movingAverage(salesMonth,3));
    printf("May      - October   $%.2f\n",movingAverage(salesMonth,4));
    printf("June     - November  $%.2f\n",movingAverage(salesMonth,5));
    printf("July     - December  $%.2f\n",movingAverage(salesMonth,6));
    printf("Sales Report(highest to lowest):\n");
    int i;
    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            if (salesMonth[i] < salesMonth[j]) {
                double temp_sales = salesMonth[i];
                salesMonth[i] = salesMonth[j];
                salesMonth[j] = temp_sales;

                char temp_month[15];
                strcpy(temp_month, month[i]);
                strcpy(month[i], month[j]);
                strcpy(month[j], temp_month);
            }
        }
    }
    for (int i = 0; i < 12; i++) {
        printf("%-12s %.2f\n", month[i], salesMonth[i]);
    }

}