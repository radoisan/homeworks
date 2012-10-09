//ТУЕС http://www.elsys-bg.org/
//11Б
//26 номер
//Радослав Михайлов
//програма за прочитане на файла и обработка на колоните в него. 

require 'csv'

def process_file_with_csv
	f = File.open("/home/radoisan/csv_file.csv", "r")
	result = 0
	CSV.foreach("/home/radoisan/csv_file.csv") do |row|
		result = result + row[1].to_i
	end
	p result
end

def process_file
	f = File.open("/home/radoisan/csv_file.csv", "r")
	content = f.read
	result = 0
	content.each_line do |line|
		array = line.split(",")
		p line
		result = result + array[1].to_i
	end
	p result
end


process_file_with_csv

