#Class 11�
#Name �������� ��������
#Num 26
#School ���� - ELSYS elsys-bg.org
#Task - �� �� ������ ������ �� ������� 10 ������� 

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

