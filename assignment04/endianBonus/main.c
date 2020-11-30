#define LITTLE_ENDIAN   0
#define BIG_ENDIAN      1

int main(void)
{
    int testEndian = 0xABCD;
    char *pTestEndian;
    
    pTestEndian = (char *)&testEndian;  //pointing to address of variable
    
    if(*pTestEndian == 0x00){
        return BIG_ENDIAN;
    }else{
        return LITTLE_ENDIAN;
    }
}
