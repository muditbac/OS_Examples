class xyz implements Runnable {
	public void run(){
		int i;
		// for(i=0;i<10;i++){
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

		for(int i=1;i<=80;i++){
			System.out.print("x");
			a = new Thread(k);
			a.start();
			Thread.sleep(2400);
		}
	}
}
