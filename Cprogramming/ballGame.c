#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

/**
 * 1. 尝试不用usleep函数 利用循环语句使小球变慢
 * 2. 尝试用printf("\a") 实现触边界响铃效果
 * 3. 尝试绘制边框
 * 
 * 参考答案链接：https://blog.csdn.net/weixin_72939806/article/details/129221682
*/

int main() {
    
    
    // 静止小球的位置 
    int i, j;
    int x = 2; //坐标
    int y = 2;

    int velocity_x = 1;
    int velocity_y = 1;
    int left = 0;
    int right = 20;
    int top = 0;
    int bottom = 10;
    //长10 宽20

  

    //int height = 20;
    //int velocity = 1;
    // printf "\033c" 清屏
    // 小球下落： 让小球的x坐标增加
    // 上下弹跳的小球：小球新位置 = 旧位置x + 速度velocity，当判断小球到达上下边界时改变方向，即改变velocity符号
    // 斜着弹跳的小球：增加x，y两个方向的速度


   while(1){
		x+=velocity_x;
		y+=velocity_y;
		
		system("clear");
		
		for(j=0;j<=right;j++) printf("_"); printf("\n");
		for(i=1;i<bottom;i++){
			printf("|");
			for(j=0;j<right-1;j++) printf(" ");
			printf("|\n"); 
		}
		for(j=0;j<=right;j++) printf("=");
        
		printf("\033[0;0H");
		
		for(i=0;i<x;i++)
			printf("\n");
		for(j=0;j<y;j++){
			if(j==0)printf("|");
			else printf(" ");
		}
		printf("o");
		printf("\n");
		usleep(250000);
		 
		if(x==top+1||x==bottom-1){
			velocity_x=-velocity_x;
			printf("\a");
		}
		if(y==left+1||y==right-1){
			velocity_y=-velocity_y;
			printf("\a");
		}
	}



// for(x=1; x < 10; x++) {
//     system("clear");

//     for (i=0; i < x; i++) {
//         printf("\n");
//     }

//     for (j = 0; j < y; j++) {
//         printf(" ");
//     }

//     printf("o");
//     printf("\n");
//     //sleep(1);
//     usleep(200000); // 500毫秒 * 1000 微秒/毫秒 = 500000 微秒
// }


    return 0;
}