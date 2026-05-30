#include<stdio.h>
#include<math.h>
int main()
{
    double positions[] = {0,2,5,3,7,9};
    int time_interval = 1;
    int data_length = sizeof(positions) / sizeof(positions[0]);
    double total_displacement = positions[data_length - 1] - positions[0];
    double total_distance = 0;
    double max_speed = 0;
    for(int i = 1;i < data_length;i++)
    {
        double delta_pos = positions[i] - positions[i - 1];
        total_distance  += fabs(delta_pos);
        double current_speed = fabs(delta_pos) / time_interval;
        if(current_speed > max_speed)
        {
            max_speed = current_speed;
        }
    }
    printf("=================Results====================\n");
    printf("采集次数：%d 次\n", data_length);
    printf("固定时间间隔：%d 秒\n", time_interval);
    printf("总位移：%.2f 米\n", total_displacement);
    printf("总路程：%.2f 米\n", total_distance);
    printf("最大速度：%.2f 米/秒\n", max_speed);

    return 0;
}