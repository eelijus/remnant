
#include "push_swap.h"

int main(int argc, char **argv)
{
    t_carrier carrier;
    t_stack *a;
    t_stack *b;
    t_stack *t;

    a = 0;
    b = 0;
    if (argc < 2)
        exit(0);

    init_carrier(&carrier);


    fill_stack(&carrier, &a, argc - 1, &argv[1]);
    printf("size: %d\n", (&carrier)->ac_cnt);
    
    // pb(&carrier, &a, &b);
    // print_stack(&carrier, a);
    // print_stack(&carrier, b);

    
    
    if ((&carrier)->ac_cnt == 3)
        sort_three(&carrier, &a);
    print_stack(&carrier, a);

    // if ((&carrier)->ac_cnt == 5)
    //     sort_five(&carrier, &a, &b);
    // print_stack(&carrier, a);



    // printf("min : %d\n", find_min(&carrier, &a));
    // printf("max : %d\n", find_max(&carrier, &a));
    //printf("min : %d\n", find_max(&carrier, b));

    //system("leaks a.out");
}