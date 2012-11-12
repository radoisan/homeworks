package com.radoisan.HW.code;

public class AirPlane {
	private Human [][] seats = new Human[6][27]; 
	private int sum = 0;
	private boolean sat = false;
	
	public void printSeats(){
		for (int k = 0; k < 27; k++){
			for (int l = 0; l < 6; l++){
				if (l == 2)
				{
					System.out.println(seats[l][k].getName() + "|" + " ");
				} else {
					System.out.println(seats[l][k].getName() + "|");
				}
			}
		}
			System.out.println();
	}


public void add(int rvalue, Human h, Human j)  {
    sat = false;
    for(int i = 0; i<27; i++) {
        for(int k = 0; k<6; k++) {
            if(seats[k][i] == null) {    
                if(rvalue == 2 && k<=4) {
                    if(seats[k+1][i] == null && k%3 <=1) {
                        seats[k][i] = h;
                        seats[k+1][i] = j;
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

public void add(int rvalue, Human h, Human j, Human l) {
    sat = false;
    for(int i = 0; i<27; i++) {
        for(int k = 0; k<6; k++) {
            if(seats[k][i] == null) {
                if(rvalue == 3 && k<=3) {
                    if(seats[k+1][i] == null && seats[k+2][i] == null && k%3 == 0) {
                        seats[k][i] = h;
                        seats[k+1][i] = j;
                        seats[k+2][i] = l;
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


public int freeSeats() {
    int freeseats;
    if(sum < 162) {
        freeseats = 162 - sum;
        return freeseats;
    } else {
        System.out.println("There are no freeseats left");
        return 0;
    }
}

public int numOfMales() {
    int males = 0;
    for(Human[] h:seats){
        for(Human j:h){
            if(j.getGender() == "Male"){
                males++;
            }
        }
        
    }
    return males;
}

public int numOfFemales() {
    int females = 0;
    for(Human[] h:seats){
        for(Human j:h){
            if(j.getGender() == "Female"){
                females++;
            }
        }
        
    }
    return females;
}

public void fillThePlane(AirPlane plane) {
    int passangers;
    while(plane.freeSeats() != 0) {
        passangers = (int)((Math.random() * 10)%3)+1;
        for(int i = 0; i < passangers; i++) {
            if(passangers == 1){
                Human h = new Human();   
                plane.add(passangers, h);
            }else {
                if(passangers == 2) {
                    Human h = new Human();
                    Human j = new Human();
                    plane.add(passangers, h, j);
                }else{
                    Human h = new Human();
                    Human j = new Human();
                    Human l = new Human();
                    plane.add(passangers, h, j, l);
                }
            }
        }
    }

} 


public static void main(String[] args) {
    AirPlane plane = new AirPlane();
    plane.fillThePlane(plane);
    System.out.println("############################");
    plane.printSeats();
    System.out.println("Number of males - " + plane.numOfMales());
    System.out.println("Number of females - " + plane.numOfFemales());
}

} 