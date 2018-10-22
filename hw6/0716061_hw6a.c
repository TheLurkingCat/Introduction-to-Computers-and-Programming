#include <stdio.h>

#define abs(X) (X) > 0 ? (X) : -(X)
/* This function should return the mean of datas */
float mean(float datas[], int length) {
    float sum = 0;
    for (int i = 0; i < length; i++) {
        sum += datas[i];
    }
    return sum / length;
}

/* This function should return the variance of datas */
float variance(float datas[], int length, float mu) {
    float delta = 0, sum = 0;

    for (int i = 0; i < length; i++) {
        delta = (datas[i] - mu);
        sum += (delta * delta);
    }
    return sum / length;
}

/* This function should return the distance between value and (mean,variance)
 * The distance is defined by : distance = |(value-mean)/variance|
 * Note : 1.The distance should >= 0
 *		  2.The return type of abs() in stdlib is int
 */
float distance(float value, float mean, float variance) {
    return abs((value - mean) / variance);
}

int main() {
    float height_boys[100];
    float height_girls[100];
    float height_person;

    // Read how many boys & girls
    int num_boys, num_girls, i;
    scanf("%d %d", &num_boys, &num_girls);

    // Read boys' height
    for (i = 0; i < num_boys; i++) {
        scanf("%f", &height_boys[i]);
    }

    // Read girls' height
    for (i = 0; i < num_girls; i++) {
        scanf("%f", &height_girls[i]);
    }

    // Read person's height
    scanf("%f", &height_person);

    // Compute the mean of height for boys & girls
    float height_mean_boy = mean(height_boys, num_boys);
    float height_mean_girl = mean(height_girls, num_girls);

    // Compute the variance of height for boys & girls
    float height_var_boy = variance(height_boys, num_boys, height_mean_boy);
    float height_var_girl = variance(height_girls, num_girls, height_mean_girl);

    // Compute the distance between the person and boys & girls
    float distance_boy = distance(height_person, height_mean_boy, height_var_boy);
    float distance_girl = distance(height_person, height_mean_girl, height_var_girl);

    // Determine if the person is boy or girl
    if (distance_boy < distance_girl) {
        printf("boy");
    } else if (distance_girl < distance_boy) {
        printf("girl");
    } else {
        printf("I don't know");
    }

    return 0;
}