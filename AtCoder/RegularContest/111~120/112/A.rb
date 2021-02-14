t = gets.to_i
t.times do
  l,r = gets.split.map(&:to_i)
  n = r - l * 2
  if n < 0
    puts 0
  else
    puts ((n+1) * (n+2) / 2)
  end
end
