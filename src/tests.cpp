#include "tests.h"



// 练习1，实现库函数strlen
int my_strlen(char *str) {

    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    return count;

}




// 练习2，实现库函数strcat
void my_strcat(char *str_1, char *str_2) {

    int i = 0;

    while (str_1[i] != '\0') {
        i++;
    }

    int j = 0;

    while (str_2[j] != '\0') {
        str_1[i] = str_2[j];
        i++;
        j++;
    }

    str_1[i] = '\0';

}



// 练习3，实现库函数strstr
char* my_strstr(char *s, char *p) {

    if (*p == '\0') return s; 

    for (int i = 0; s[i] != '\0'; i++) {
        int j = 0;
        while (p[j] != '\0' && s[i + j] == p[j]) {
            j++;
        }

        if (p[j] == '\0') return &s[i]; 

    }
    return 0;
}

// 练习4，将彩色图片(rgb)转化为灰度图片
void rgb2gray(float *in, float *out, int h, int w) {

    for (int i = 0; i < h * w; i++) {
        float r = in[i * 3];
        float g = in[i * 3 + 1];
        float b = in[i * 3 + 2];
        out[i] = 0.1140f * b + 0.5870f * g + 0.2989f * r;
    }
    
}

// 练习5，实现图像处理算法 resize：缩小或放大图像
void resize(float *in, float *out, int h, int w, int c, float scale) {
    (void)in; (void)out; (void)h; (void)w; (void)c; (void)scale;
}

// 练习6，实现图像处理算法：直方图均衡化
void hist_eq(float *in, int h, int w) {
    (void)in; (void)h; (void)w;
}