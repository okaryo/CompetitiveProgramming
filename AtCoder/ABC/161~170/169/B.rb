n = gets.to_i
a = gets.split.map(&:to_i)

ans = 1
a.sort.each do |x|
  ans *= x
  if ans > 10**18
    puts -1
    exit
  end
end
puts ans