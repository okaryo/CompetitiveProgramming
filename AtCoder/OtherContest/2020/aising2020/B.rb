n = gets.to_i
a = gets.split.map(&:to_i)

ans = 0
n.times do |i|
  if (i+1).odd? && a[i].odd?
    ans += 1
  end
end

puts ans
