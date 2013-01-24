require 'csv'

myString = ARGV[1]

CSV.open("result.csv", "w") do |csv|
	CSV.foreach("temp.csv") do |row|
		name = row[0]
		role = row[2]
		email = row[1]
			if (role.length - email.length > myString.length)
				csv << [name, role, email]
				#puts "Here is result\n#{row[0]}, #{row[1]}, #{row[2]}"
			end
	end
end
