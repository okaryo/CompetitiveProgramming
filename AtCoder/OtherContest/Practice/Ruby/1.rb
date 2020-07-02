a = gets.to_i
b = gets.split(' ').map(&:to_i)
c = gets

puts "#{b.inject(a, :+)} #{c}"
