s,t = gets.split.map(&:to_i)
ans = 0
0.upto(s) do |a|
  0.upto(s-a) do |b|
    0.upto(s-a-b) do |c|
      if a*b*c <= t
        ans += 1
      end
    end
  end
end
puts(ans)
