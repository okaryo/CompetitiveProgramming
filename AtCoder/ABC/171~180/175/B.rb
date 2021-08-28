n = gets.to_i
l = gets.split.map(&:to_i).sort

ans = 0

n.times do |i|
  i.times do |j|
    j.times do |k|
      if l[i] != l[j] && l[j] != l[k] && l[k] + l[j] > l[i]
        ans += 1
      end
    end
  end
end

puts ans
