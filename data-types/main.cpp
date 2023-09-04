int main()
{
    /**
     * int - Integer
     * size 4 bytes
     * range {-2147483648, 2147483647}
     */
    int integrer = 11;

    /**
     * float - Floating Point
     * size 4 bytes
     * range {1.175494351E-38, 3.402823466E+38}
     */
    float floatingPoint = 64.74;

    /**
     * double - double Floating Point
     * size 8 bytes
     * range {2.2250738585072014E-308, 1.7976931348623158E+308}
     */
    double doubleFloatingPoint = 134.64534;

    /**
     * char - Character
     * size 1 bytes
     */
    char character = 'a';

    /**
     * wchar_t - Wide Character
     * size 2 bytes
     * is used to represent characters that require more memory to represent them
     * like storing Hebrew character
     */
    wchar_t wideCharacter = L'ם';

    /**
     * bool - Boolean
     * size 1 bytes
     */
    bool boolean = true;

    return 0;
}