require 'csv'

myString = ARGV[1]

CSV.open("result.csv", "w") do |csv|
	CSV.foreach("temp.csv") do |row|
		name = row[0]
		role = row[2]
		email = row[1]
			if (role == myString)
				csv << [name, role, email]
				#puts "Here is result\n#{row[0]}, #{row[1]}, #{row[2]}"role.length - email.length
			end
	end
end
