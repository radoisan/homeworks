/*
Технологично училище "Електронни системи"
www.elsys-bg.org
11Б клас
Радослав Михайлов
Номер 26
Задача - Да се състави програма, която прави автоматична подредба на пътниците в самолет, който има 162 места, разделени на 6 колони и 27 реда.
*/
import java.util.Random;

public class AirPlaneSort {

	private int [][] seats = new int[6][27];
	private int br=0;
	private boolean seat = false;
	public void printSeats() {

		for (int k=0; k<27; k++) {
			for(int l=0; l<6; l++) {
				if(l == 2)
				{
					System.out.print(seats[l][k] + " ");
				} else {
					System.out.print(seats[l][k] );
				}
			}
				System.out.println();
		}
	}		

	
	public void add(int rvalue) {
		seat = false;
			for(int i = 0; i<27; i++) {
				for(int k = 0; k<6; k++) {
					if(seats[k][i] == 0) {
						if(rvalue == 1) {
							seats[k][i] = 1;
							sum += rvalue;
							sat = true;
							break;
						}

						if(rvalue == 2 && k<=4) {
							if(seats[k+1][i] == 0 && k%3 <=1) {
								seats[k][i] = 2;
								seats[k+1][i] = 2;
								sum += rvalue;
								sat = true;
								break;
							}
						}

						if(rvalue == 3 && k<=3) {
							if(seats[k+1][i] == 0 && seats[k+2][i] == 0 && k%3 == 0) {
								seats[k][i] = 3;
								seats[k+1][i] = 3;
								seats[k+2][i] = 3;
								sum += rvalue;
								sat = true;
								break;
							}
						}
						} else {
							continue;
						}
					}
					if(sat == true) {
						break;
					}
				}
				if(sat == false){
					System.out.println("You must wait another plane");
			}

	}
	

	public freeSeats() {
	int freeseats;
	if(sum < 162){
		freeseats= 162 - sum;
		return freeseats;
	}		
	else{
		System.out.println("There aren't free Seats left");
		return 0;
	}
	}

	public static void main(String[] args) {
		
		AirPlane plane = new AirPlane();
					
		int passengers;	
		plane.printSeats();	
		while (plane.freeSeats()!= 0){
			pasengers = (int)((Math.random()* 10)%3)+1;
			plane.add(passengers);
		}
		System.out.println("############################");
		plane.printSeats();
	}

}
