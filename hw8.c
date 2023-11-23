#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 표준편차를 계산하는 함수
double calculateStandardDeviation(double arr[], int size) {
    double sum = 0.0, mean, variance = 0.0, stddev = 0.0;

    // 평균 계산
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    mean = sum / size;

    // 분산 계산
    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance = variance / size;

    // 표준편차 계산
    stddev = sqrt(variance);

    return stddev;
}

int main() {
    // 5개의 실수를 저장할 배열 선언
    double numbers[5];

    // 사용자로부터 5개의 실수 입력 받기
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
    }

    // 표준편차 계산
    double stddev = calculateStandardDeviation(numbers, 5);

    // 결과 출력
    printf("Standard Deviation= %.2lf\n", stddev);

    return 0;
}
