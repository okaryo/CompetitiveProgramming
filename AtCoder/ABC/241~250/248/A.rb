S = gets.chomp
10.times do |i|
  unless S.include?(i.to_s)
    puts i
    exit 0
  end
end
