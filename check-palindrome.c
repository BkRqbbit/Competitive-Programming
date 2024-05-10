bool solution(char * inputString) {
    int size = strlen(inputString);
    
    for( int i = 0; i < size / 2; i++ ){
        if( inputString[i] != inputString[size - i - 1])
            return false;
    }
    
    return true;
}