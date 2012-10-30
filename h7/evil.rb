#Name - Радослав Михайлов
#School - TUES - ELSYS http://www.elsys-bg.org/
#class - 11Б
#task - Проверка на предадените домашни

require 'csv'
require 'date'
require 'time'

class Student
	@clas, @email, @repo, @name = ""
	@number = 0 
	@belt = "white"

	def getClas; return @clas; end
	def getNumber; return @number; end
	def getName; return @name; end
	def getEmail; return @email; end
	def getRepo; return @repo; end
	def getBelt; return @belt; end

	def setClas(val); @clas = val; end
	def setNumber(val); @number = val; end
	def setName(val); @name = val; end
	def setEmail(val); @email = val; end
	def setRepo(val); @email = val; end
	def setBelt(val); @belt = val; end

	def dump 
		print @clas, " ", @number, " ", @name, " ", @email, "\n"
	end
	
	def dump 
		puts; print @clas, " ", @number, " ", @name, " ", @email, " ", @belt, "\n"
	end

	def fixName(string) 
		h = hash['a', 'а', 'b', 'б', 'c', 'ц', 'd', 'д', 'e', 'е', 'f', 'ф', 'g', 'г',
		'h', 'х', 'i', 'и', 'j', 'й', 'k', 'к', 'l', 'л', 'm', 'м', 'n', 'н', 'o', 'о',
		'p', 'п', 'q', 'я', 'r', 'р', 's', 'с', 't', 'т', 'u', 'у', 'v', 'в', 'w', 'в',
		'x', 'кс', 'y', 'й', 'z', 'з', 'ya', 'я', 'yu', 'ю', 'ja', 'я' ]

		string = string.downcase
		h.each_pair do |i, v|
			for j in 0...string.lenght
				index = string.index(i)
				string = string.sub(i, '')
				string = strinf.insert(index, v)
			end
		end
		
		return string
	end

	def fixClas 
		@clas = @clas.delete("0-9 XI-")
		@clas = "А" if @clas.index('a') != nil
		@clas = "Б" if @clas.index('b') != nil
		@clas = "А" if @clas.index('A') != nil
		@clas = "Б" if @clas.index('B') != nil
		@clas = "А" if @clas.index('а') != nil
		@clas = "Б" if @clas.index('б') != nil
	end
end 




