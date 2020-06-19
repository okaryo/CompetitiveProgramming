n, t = gets.split.map(&:to_i)
a = n.times.map{gets.split.map(&:to_i)}

sum = a.reduce(0){|x, y| x + y[1]}

if sum > t
  puts -1
  exit
end

ans = n

a.sort{|x, y| x[0] - x[1] <=> y[0] - y[1]}.each do |z|
  tmp = z[0] - z[1]
  if sum + tmp <= t
    sum += tmp
    ans -= 1
  end
end

puts ans
