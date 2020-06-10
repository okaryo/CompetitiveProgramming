n = gets.to_i
robots = n.times.map{gets.split.map(&:to_i)}

robots.sort! { |a, b| a[0] + a[1] <=> b[0] + b[1] }

max_left = -10**9
ans = 0
robots.each do |x, l|
  if max_left <= x - l
    ans += 1
    max_left = x + l
  end
end

puts ans
