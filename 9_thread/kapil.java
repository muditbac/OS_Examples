class xyz implements Runnable {
	public void run(){
		int i;
		for(i=0;i<5;i++){
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
		xyz k;
		Thread a,b;
		k = new xyz();
		a = new Thread(k);	
		b = new Thread(k);
		b.run();
		a.start();
		System.out.print("x");
	}
}
