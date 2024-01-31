int factoral(int a){
    if (a <= 1){
        return 1;
    }
    return a * factoral(a-1);

}