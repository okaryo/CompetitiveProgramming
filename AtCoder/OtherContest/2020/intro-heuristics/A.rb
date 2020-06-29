d = gets.to_i
c = gets.split.map(&:to_i)
s = d.times.map{gets.split.map(&:to_i)}
t = d.times.map{gets.to_i}

last_event_dates = Array.new(26, 0)
satisfaction_sum = 0
t.each_with_index do |type, day|
  satisfaction_sum += s[day][type - 1]

  last_event_dates[type - 1] = day + 1
  c.each_with_index do |c_v, index|
    satisfaction_sum -= c_v * (day + 1 - last_event_dates[index])
  end

  puts satisfaction_sum
end