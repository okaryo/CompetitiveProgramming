N = gets.to_i
S = gets.chomp
t = ''
S.each_char do |c|
  t << c
  next if t.size < 3
  if t[-3, 3] == 'fox'
    t = t[0, t.size - 3]
  end
end
puts(t.size)
