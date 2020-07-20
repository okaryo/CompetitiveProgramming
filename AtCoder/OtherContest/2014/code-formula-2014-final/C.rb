s = gets.chomp

a = s.scan(/@([a-zA-Z]+)/).uniq.sort

a.each do |x|
  puts x
end
