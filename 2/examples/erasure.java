import java.util.ArrayList;

class erasure {
    public static void main(String [] args) {
	ArrayList<Integer> li;
	ArrayList<String> ls;

	li = new ArrayList<Integer>();
	ls = new ArrayList<String>();

	System.out.println(li.getClass());
	System.out.println(ls.getClass());
    }
};
