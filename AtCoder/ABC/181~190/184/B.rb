n,x = gets.split.map(&:to_i)
s = gets.chomp
sum = x
s.each_char do |c|
  if c == 'x'
    sum = [0, sum - 1].max
  else
    sum += 1
  end
end
puts sum
