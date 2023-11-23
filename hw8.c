#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// ǥ�������� ����ϴ� �Լ�
double calculateStandardDeviation(double arr[], int size) {
    double sum = 0.0, mean, variance = 0.0, stddev = 0.0;

    // ��� ���
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    mean = sum / size;

    // �л� ���
    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance = variance / size;

    // ǥ������ ���
    stddev = sqrt(variance);

    return stddev;
}

int main() {
    // 5���� �Ǽ��� ������ �迭 ����
    double numbers[5];

    // ����ڷκ��� 5���� �Ǽ� �Է� �ޱ�
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%lf", &numbers[i]);
    }

    // ǥ������ ���
    double stddev = calculateStandardDeviation(numbers, 5);

    // ��� ���
    printf("Standard Deviation= %.2lf\n", stddev);

    return 0;
}
