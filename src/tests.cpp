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
    int new_h = h * scale, new_w = w * scale;
    
    
    for (int y = 0; y < new_h; y++) {
        for (int x = 0; x < new_w; x++) {
            
            float x0 = x / scale;
            float y0 = y / scale;
            
        
            int x1 = (int)x0;
            int y1 = (int)y0;
            int x2 = x1 + 1;
            int y2 = y1 + 1;
            
            
            if (x2 >= w) x2 = w - 1;
            if (y2 >= h) y2 = h - 1;
            
        
            float dx = x0 - x1;
            float dy = y0 - y1;
            

            for (int k = 0; k < c; k++) {
                
                float p1 = in[(y1 * w + x1) * c + k]; // 左上
                float p2 = in[(y1 * w + x2) * c + k]; // 右上
                float p3 = in[(y2 * w + x1) * c + k]; // 左下
                float p4 = in[(y2 * w + x2) * c + k]; // 右下
                
        
                float result = p1 * (1 - dx) * (1 - dy) +
                               p2 * dx * (1 - dy) +
                               p3 * (1 - dx) * dy +
                               p4 * dx * dy;
                
                out[(y * new_w + x) * c + k] = result;
            }
        }
    }
}





// 练习6，实现图像处理算法：直方图均衡化
void hist_eq(float *in, int h, int w) {
    int total = h * w;
    int hist[256] = {0};
    int cdf[256] = {0};
    int map[256] = {0};

    
    for (int i = 0; i < total; i++) {
        int gray = (int)in[i];
        if (gray < 0) gray = 0;
        if (gray > 255) gray = 255;
        hist[gray]++;
    }


    int cdf_min = 0;
    for (int i = 0; i < 256; i++) {
        if (i == 0) {
            cdf[i] = hist[i];
        } else {
            cdf[i] = cdf[i - 1] + hist[i];
        }
        if (cdf_min == 0 && hist[i] != 0) {
            cdf_min = cdf[i];
        }
    }

    
    for (int i = 0; i < 256; i++) {
    
        map[i] = (int)((cdf[i] - cdf_min) * 255.0 / (total - cdf_min) + 0.5);
    }

    
    for (int i = 0; i < total; i++) {
        int gray = (int)in[i];
        if (gray < 0) gray = 0;
        if (gray > 255) gray = 255;
        in[i] = (float)map[gray];
    }
}