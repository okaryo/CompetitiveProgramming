_n = gets.to_i
k = gets.split.map(&:to_i)

l = [k[0]]
k.each_cons(2) { |x| l << x.min }
l << k.last

puts l.join(' ')
