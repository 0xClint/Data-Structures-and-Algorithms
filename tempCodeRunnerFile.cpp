char toL(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool isAllowed(char ch)
{
    return ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9' ||
           ch >= 'A' && ch <= 'Z';
    // return isalnum(ch);
}