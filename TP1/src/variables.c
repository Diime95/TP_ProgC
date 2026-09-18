int main() {

    char c = 'A';
    signed char sc = -50;
    unsigned char uc = 200;

    short s = -1200;
    signed short ss = -2500;
    unsigned short us = 5000;

    int i = -100000;
    signed int si = -200000;
    unsigned int ui = 300000;

    long int li = -1000000L;
    signed long int sli = -2000000L;
    unsigned long int uli = 3000000UL;

    long long int lli = -10000000000LL;
    signed long long int slli = -20000000000LL;
    unsigned long long int ulli = 30000000000ULL;

    float f = 3.14f;
    double d = 3.141592;
    long double ld = 3.1415926535L;

    printf("char : %c\n", c);
    printf("signed char : %hhd\n", sc);
    printf("unsigned char : %hhu\n\n", uc);

    printf("short : %hd\n", s);
    printf("signed short : %hd\n", ss);
    printf("unsigned short : %hu\n\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n\n", uli);

    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}