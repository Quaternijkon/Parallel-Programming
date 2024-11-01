#include "mpi.h"
#include <stdio.h>

int main( int argc, char* argv[] )
{
    int i;
    int rank, nproc;
    int isend, irecv[32];
 
    // 初始化MPI环境
    MPI_Init( &argc, &argv );

    // 获取总进程数
    MPI_Comm_size( MPI_COMM_WORLD, &nproc );

    // 获取当前进程的排名
    MPI_Comm_rank( MPI_COMM_WORLD, &rank );

    isend = rank + 1;

    // 所有进程将各自的isend值收集到irecv数组中
    MPI_Allgather(&isend, 1, MPI_INT, irecv, 1, MPI_INT, MPI_COMM_WORLD);

    // 输出接收到的数据
    for(i = 0; i < nproc; i++)
        printf("My rank = %d  irecv = %d\n", rank, irecv[i]);

    // 结束MPI环境
    MPI_Finalize();
}
