/*
училище - ТУЕС
клас - 11Б
номер - 26
име - Радослав Михайлов Михайлов
задача - Да се създаде програма, която да изкарва на екрана стойността на системните свойства по
зададени от командния ред имена на свойствата. Програмата трябва да приема и
невалидни имена. Ако последния подаден аргумент от командния ред е up то стойностите
показани в изхода трябва да са сортиран във възходящ ред. Ако последната стойност е
down изходът трябва да е сортиран в низходящ ред. Стойността по подразбиране, ако не е
посочено up или down, е up.
*/
import java.util.Arrays;
import java.util.Comparator;
import java.util.Collections;

public class SystemProperties {
	public static void main(String [] args) {
		if(args[args.length-1].equals("down")) {
				Arrays.sort(args,Collections.reverseOrder());
				for(String str:args) {
						if(System.getProperty(str) != null){ System.out.println(
								System.getProperty(str));
						}
				}
		} else {
				Arrays.sort(args);
				for(String str:args) {
						if(System.getProperty(str) != null){
								System.out.println(System.getProperty(str));
						}
				}
		}
	}
}