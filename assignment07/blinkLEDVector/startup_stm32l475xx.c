#pragma section="CSTACK"

void __iar_program_start(void);

int const __vector_table[] @ ".intvec" = {
    (int)__section_end("CSTACK"),
    (int)__iar_program_start
};