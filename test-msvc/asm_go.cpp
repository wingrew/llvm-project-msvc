void func(void)
{
    goto C_Dest;  /* Legal: correct case   */
    //goto c_dest;  /* Error: incorrect case */

    //goto A_Dest;  /* Legal: correct case   */
    //goto a_dest;  /* Legal: incorrect case */

    __asm
    {
        jmp C_Dest; Legal: correct case
        //jmp c_dest; Legal: incorrect case

        //jmp A_Dest; Legal: correct case
        //jmp a_dest; Legal: incorrect case

        a_dest:; __asm label
    }

C_Dest:       /* C label */
    return;
}
int main()
{
}