#Class 11Б
#Name Радослав Михайлов
#Num 26
#School ТУЕС - ELSYS elsys-bg.org
#Task - Да се намери сборът на първите 10 времена 

output_name = "output_values.csv"
input_name = "feature_scenarios_times.csv"
sum = 0.00
x = 0 
	CSV.open(output_name, "w") do |csv|
	CSV.foreach(input_name) do |row|
			sum += row[0].to_f
			i += 1
		if i == 10
			break
		end
	end
	csv << [sum]
end

