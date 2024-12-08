#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else {
        int num1 = 0;
        int num2 = 1;
        int result = 0;
        for (int i = 2; i <= sequence; i++) {
            result = num1 + num2;
            num1 = num2;
            num2 = result;
        }
        return result;
    }
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0) {
        return 0;
    } else {
        return 1;
    }
}
