class pqr implements Runnable {
	public void run(){
		int i;
		// for(i=0;i<10;i++){
		for(i=0;i<26;i++){
			System.out.print((char)('A'+i));
			try {
				Thread.sleep(100*(i));
			}
			catch (Exception e){}
		}
	}
}
class xyz implements Runnable {
	public void run(){
		int i;
		for(i=0;i<10;i++){
			System.out.print(i);
			try {
				Thread.sleep(1000);
			}
			catch (Exception e){}
		}
	}
}

class kapil{
	public static void main(String ar[]) throws Exception {
		pqr k;
		xyz l;
		Thread a,b;
		k = new pqr();
		l = new xyz();
		a = new Thread(k);
		b = new Thread(l);
		b.start();
		Thread.sleep(700);
		a.run();
		System.out.print("ram");
	}
}
