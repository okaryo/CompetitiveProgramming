a = gets.chomp
b = gets.to_i

puts a[(b-1) % a.length]
