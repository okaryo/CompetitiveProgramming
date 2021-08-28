s,p = gets.split.map(&:to_i)
n = 1
while n * n <= p
  if p % n == 0
    m = p / n
    if n + m == s
      puts 'Yes'
      exit 0
    end
  end
  n += 1
end
puts 'No'
