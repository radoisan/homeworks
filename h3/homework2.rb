//ТУЕС http://www.elsys-bg.org/
//11Б
//26 номер
//Радослав Михайлов
//програма за прочитане на файла и обработка на колоните в него. 

require 'csv'

def process_file_with_csv
	useruby = 0
	sumryby_use = 0
	usepython = 0
	symputhon_use = 0
	useperl = 0
	sumperl_use = 0
	CSV.foreach("/home/radoisan/csv_file1.csv") do |row|
	if row[4]=="Python"
		if row[3] =~ /^[-+]?[0-9]*\.?[0-9]+$/
			print row[3], "Used Python!\n"
			usepython = usepython + row[3].to_i
		end
	sumpython_use = sumpython_use +1;
	end
	if[4] == "Perl"
		if row[3] =~ /^[-+]?[0-9]*\.?[0-9]+$/
			print row[3], "Used Perl!\n"
			useperl = useperl + row[3].to_i
		end
	sumperl_use = sumperl_use +1;
	end
	if row[4] == "Ruby"
		if row[3] =~ /^[-+]?[0-9]*\.?[0-9]+$/
			print row[3], "Used Ruby!\n"
			sumruby_use = sumruby_use + row[3].to_i
		end
	sumruby_use = sumrubby_use +1;
	end
	print usepython, "Used Python!\n"
	print sumpython_use, "Sbora ot nomerata na horata izpolzvali Python"
	print useperl, "Used Perl!\n"
	print sumperl_use, "Sbora ot nomerata na horata izpolzvali Perl"
	print useruby, "Used Ruby!\n"
	print sumruby_use, "Sbora ot nomerata na horata izpolzvali Ruby"
	
end
	
def process_file
	f = File.open("/home/radoisan/csv_file1.csv", "r")
	usepython = 0
	useruby = 0
	useperl = 0
	content = f.read
	result = 0
	content.each_line do |line|
		array = line.split(",")
		result = result + array[3].to_i
	end
	p result
end
process_file
process_file_with_csv

