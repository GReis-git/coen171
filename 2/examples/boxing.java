class boxing {
    public static void main(String[] args) {
	Object obj;

	obj = 10;
	System.out.println(obj.getClass());


	Integer sum = 0;

	for (int i = 0; i < 100; i ++)
	    sum += i;				// lots of object creations!
    }
}
