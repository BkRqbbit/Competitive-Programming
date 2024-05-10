int solution(int year) {
    int century = floor( year / 100 );
    
    if( year % 100 != 0 )
        ++century;
        
    return century;
}