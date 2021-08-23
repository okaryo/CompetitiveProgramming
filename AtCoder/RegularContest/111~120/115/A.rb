N,M = gets.split.map(&:to_i)
even_c = 0
odd_c = 0
N.times do
  s = gets.chomp
  one_c = s.count('1')
  if one_c % 2 == 0
    even_c += 1
  else
    odd_c += 1
  end
end
puts(even_c*odd_c)
